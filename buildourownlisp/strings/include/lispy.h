#ifdef _WIN32

static char buffer[2048];

char* readline(char* prompt) {
  fputs(prompt, stdout);
  fgets(buffer, 2048, stdin);
  char* cpy = malloc(strlen(buffer)+1);
  strcpy(cpy, buffer);
  cpy[strlen(cpy)-1] = '\0';
  return cpy;
}

void add_history(char* unused) {}

#else
#include <editline/readline.h>
#include <editline/history.h>
#endif

/* Parser Declariations */

mpc_parser_t* Number; 
mpc_parser_t* Symbol; 
mpc_parser_t* String; 
mpc_parser_t* Comment;
mpc_parser_t* Sexpr;  
mpc_parser_t* Qexpr;  
mpc_parser_t* Expr; 
mpc_parser_t* Lispy;

/* Forward Declarations */

struct lval;
struct lenv;
typedef struct lval lval;
typedef struct lenv lenv;

/* Lisp Value */

enum { LVAL_ERR, LVAL_NUM,   LVAL_SYM, LVAL_STR, 
       LVAL_FUN, LVAL_SEXPR, LVAL_QEXPR };
       
typedef lval*(*lbuiltin)(lenv*, lval*);

struct lval {
  int type;

  /* Basic */
  long num;
  char* err;
  char* sym;
  char* str;
  
  /* Function */
  lbuiltin builtin;
  lenv* env;
  lval* formals;
  lval* body;
  
  /* Expression */
  int count;
  lval** cell;
};

void lval_print(lval* v);
lval* lval_num(long x);
lval* lval_err(char* fmt, ...);
lval* lval_sym(char* s);
lval* lval_str(char* s);
lval* lval_builtin(lbuiltin func);
lval* lval_lambda(lval* formals, lval* body);
lval* lval_sexpr(void);
lval* lval_qexpr(void);
void lval_del(lval* v);
void lval_print_expr(lval* v, char open, char close);
void lval_print_str(lval* v);
void lval_println(lval* v);
int lval_eq(lval* x, lval* y);
lval* lval_copy(lval* v);
lval* lval_add(lval* v, lval* x);
lval* lval_join(lval* x, lval* y);
lval* lval_pop(lval* v, int i);
lval* lval_take(lval* v, int i);
lval* lval_eval(lenv* e, lval* v);
lval* builtin_load(lenv* e, lval* a);
lval* lval_read(mpc_ast_t* t);

struct lenv {
  lenv* par;
  int count;
  char** syms;
  lval** vals;
};

void lenv_del(lenv* e);
lenv* lenv_copy(lenv* e);
lenv* lenv_new(void);
void lenv_add_builtins(lenv* e);
lval* lenv_get(lenv* e, lval* k);
void lenv_def(lenv* e, lval* k, lval* v);
void lenv_put(lenv* e, lval* k, lval* v);
