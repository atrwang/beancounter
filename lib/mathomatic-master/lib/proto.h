/* Complete list of global C function prototypes for Mathomatic. */
/* This file was created with the cproto utility by running the "./update" script. */
/* This file is required to compile Mathomatic quietly with the -Wall compiler option. */

/* am.c */
void display_startup_message(FILE *fp);
void error(const char *str);
void reset_error(void);
void warning(const char *str);
void error_huge(void);
void error_bug(const char *str);
void check_err(void);
int get_screen_size(void);
int malloc_vscreen(void);
int init_mem(void);
int check_gvars(void);
void init_gvars(void);
void clean_up(void);
void set_sign_array(void);
int next_sign(long *vp);
void clear_all(void);
int alloc_espace(int i);
int alloc_to_espace(int en);
int alloc_next_espace(void);
int next_espace(void);
void copy_espace(int src, int dest);
int solved_equation(int i);
int found_var(token_type *p1, int n, long v);
int var_in_equation(int i, long v);
int search_all_for_var(long v, int forward_direction);
void rename_var_in_es(int en, long from_v, long to_v);
int subst_var_with_exp(token_type *equation, int *np, token_type *expression, int len, long v);
int min_level(token_type *expression, int n);
int get_default_en(char *cp);
int get_expr(token_type *equation, int *np);
int prompt_var(long *vp);
int not_defined(int i);
int current_not_defined(void);
char *get_string(char *string, int n);
int get_yes_no(void);
int return_result(int en);
void free_result_str(void);
int is_all(char *cp);
int get_range(char **cpp, int *ip, int *jp);
int extra_characters(char *cp);
int get_range_eol(char **cpp, int *ip, int *jp);
char *skip_space(char *cp);
char *skip_comma_space(char *cp);
long decstrtol(char *cp, char **cpp);
int isdelimiter(int ch);
char *skip_param(char *cp);
int strcmp_tospace(char *cp1, char *cp2);
int level_plus_count(token_type *p1, int n1, int level);
int level1_plus_count(token_type *p1, int n1);
int var_count(token_type *p1, int n1);
int no_vars(token_type *source, int n, long *vp);
int exp_contains_infinity(token_type *p1, int n1);
int exp_contains_nan(token_type *p1, int n1);
int exp_is_numeric(token_type *p1, int n1);
int exp_is_absolute(token_type *p1, int n1);
int check_divide_by_zero(double denominator);
int load_rc(int return_true_if_no_file, FILE *ofp);
/* cmds.c */
int plot_cmd(char *cp);
int version_cmd(char *cp);
long max_memory_usage(void);
int show_status(FILE *ofp);
int version_report(void);
int solve_cmd(char *cp);
int sum_cmd(char *cp);
int product_cmd(char *cp);
int for_cmd(char *cp);
int optimize_cmd(char *cp);
int output_current_directory(FILE *ofp);
int fprintf_escaped(FILE *ofp, char *cp);
void output_options(FILE *ofp, int all_set_options);
int skip_no(char **cpp);
int save_set_options(char *cp);
int set_options(char *cp, int loading_startup_file);
int set_cmd(char *cp);
int echo_cmd(char *cp);
int pause_cmd(char *cp);
int copy_cmd(char *cp);
int real_cmd(char *cp);
int imaginary_cmd(char *cp);
int tally_cmd(char *cp);
int calculate_cmd(char *cp);
int clear_cmd(char *cp);
int compare_es(int i, int j);
int compare_cmd(char *cp);
int display_fraction(double value);
int divide_cmd(char *cp);
int eliminate_cmd(char *cp);
int display_cmd(char *cp);
int list_cmd(char *cp);
int code_cmd(char *cp);
int variables_cmd(char *cp);
int approximate_cmd(char *cp);
int replace_cmd(char *cp);
int simplify_cmd(char *cp);
int factor_cmd(char *cp);
int display_term_count(int en);
int unfactor_cmd(char *cp);
int div_loc_find(token_type *expression, int n);
int fraction_cmd(char *cp);
int quit_cmd(char *cp);
int read_cmd(char *cp);
int read_file(char *cp);
int read_sub(FILE *fp, char *filename);
int edit_cmd(char *cp);
int save_cmd(char *cp);
/* complex.c */
void rect_to_polar(double x, double y, double *radiusp, double *thetap);
int roots_cmd(char *cp);
int complex_root_simp(token_type *equation, int *np);
int approximate_complex_roots(token_type *equation, int *np);
int get_constant(token_type *p1, int n, double *dp);
int parse_complex(token_type *p1, int n, complexs *cp);
/* complex_lib.c */
int complex_fixup(complexs *ap);
complexs complex_add(complexs a, complexs b);
complexs complex_negate(complexs a);
complexs complex_mult(complexs a, complexs b);
complexs complex_div(complexs a, complexs b);
complexs complex_log(complexs a);
complexs complex_exp(complexs a);
complexs complex_pow(complexs a, complexs b);
/* diff.c */
int differentiate(token_type *equation, int *np, long v);
int derivative_cmd(char *cp);
int extrema_cmd(char *cp);
int taylor_cmd(char *cp);
int limit_cmd(char *cp);
/* factor.c */
int factor_divide(token_type *equation, int *np, long v, double d);
int subtract_itself(token_type *equation, int *np);
int factor_plus(token_type *equation, int *np, long v, double d);
int factor_times(token_type *equation, int *np);
int factor_power(token_type *equation, int *np);
/* factor_int.c */
int factor_one(double value);
double multiply_out_unique(void);
int display_unique(void);
int is_prime(void);
int factor_int(token_type *equation, int *np);
int factor_int_equation(int n);
int list_factor(token_type *equation, int *np, int factor_flag);
int factor_constants(token_type *equation, int *np, int level_code);
/* gcd.c */
double gcd(double d1, double d2);
double gcd_verified(double d1, double d2);
double my_round(double d1);
int f_to_fraction(double d, double *numeratorp, double *denominatorp);
int make_fractions(token_type *equation, int *np);
int make_simple_fractions(token_type *equation, int *np);
int make_mixed_fractions(token_type *equation, int *np);
/* globals.c */
/* help.c */
int parse(int n, char *cp);
int process_parse(int n, char *cp);
int process(char *cp);
int process_rv(char *cp);
int display_process(char *cp);
int shell_out(char *cp);
char *parse_var2(long *vp, char *cp);
int display_usage(char *pstr, int i);
int display_command(int i);
int display_repeat_command(void);
int read_examples(char **cpp);
void underline_title(int count);
int help_cmd(char *cp);
/* integrate.c */
void make_powers(token_type *equation, int *np, long v);
int int_dispatch(token_type *equation, int *np, long v, int (*func)(token_type *equation, int *np, int loc, int eloc, long v));
int integrate_cmd(char *cp);
int laplace_cmd(char *cp);
int nintegrate_cmd(char *cp);
/* list.c */
void reset_attr(void);
int set_color(int color);
void default_color(int set_no_color_flag);
int display_all_colors(void);
int list1_sub(int n, int export_flag);
int list_sub(int n);
void list_debug(int level, token_type *p1, int n1, token_type *p2, int n2);
char *var_name(long v);
int list_var(long v, int lang_code);
int list_proc(token_type *p1, int n, int export_flag);
char *list_equation(int n, int export_flag);
char *list_expression(token_type *p1, int n, int export_flag);
int list_string(token_type *p1, int n, char *string, int export_flag);
int list_string_sub(token_type *p1, int n, int outflag, char *string, int export_flag);
int int_expr(token_type *p1, int n);
int list_code_equation(int en, enum language_list language, int int_flag);
char *string_code_equation(int en, enum language_list language, int int_flag);
int list_code(token_type *equation, int *np, int outflag, char *string, enum language_list language, int int_flag);
char *flist_equation_string(int n);
int flist_equation(int n);
/* main.c */
void usage(FILE *fp);
int main(int argc, char **argv);
void main_io_loop(void);
int set_signals(unsigned int time_out_seconds);
void fphandler(int sig);
void inthandler(int sig);
void exithandler(int sig);
void resizehandler(int sig);
void exit_program(int exit_value);
/* parse.c */
void str_tolower(char *cp);
void put_up_arrow(int cnt, char *cp);
int isvarchar(int ch);
int paren_increment(int ch);
int is_mathomatic_operator(int ch);
void binary_parenthesize(token_type *p1, int n, int i);
void handle_negate(token_type *equation, int *np);
void give_priority(token_type *equation, int *np);
char *parse_section(token_type *equation, int *np, char *cp, int allow_space);
char *parse_equation(int n, char *cp);
char *parse_expr(token_type *equation, int *np, char *cp, int allow_space);
char *parse_var(long *vp, char *cp);
void remove_trailing_spaces(char *cp);
void set_error_level(char *cp);
int var_is_const(long v, double *dp);
int subst_constants(token_type *equation, int *np);
int my_strlcpy(char *dest, char *src, int n);
/* poly.c */
int poly_in_v_sub(token_type *p1, int n, long v, int allow_divides);
int poly_in_v(token_type *p1, int n, long v, int allow_divides);
int poly_factor(token_type *equation, int *np, int do_repeat);
int remove_factors(void);
int poly_gcd(token_type *larger, int llen, token_type *smaller, int slen, long v);
int poly2_gcd(token_type *larger, int llen, token_type *smaller, int slen, long v, int require_additive);
int is_integer_var(long v);
int is_integer_expr(token_type *p1, int n);
int mod_simp(token_type *equation, int *np);
int poly_gcd_simp(token_type *equation, int *np);
int div_remainder(token_type *equation, int *np, int poly_flag, int quick_flag);
int poly_div(token_type *d1, int len1, token_type *d2, int len2, long *vp);
int smart_div(token_type *d1, int len1, token_type *d2, int len2);
int basic_size(token_type *p1, int len);
int get_term(token_type *p1, int n1, int count, int *tp1, int *lentp1);
void term_value(double *dp, token_type *p1, int n1, int loc);
int find_greatest_power(token_type *p1, int n1, long *vp1, double *pp1, int *tp1, int *lentp1, int *dcodep);
/* simplify.c */
void organize(token_type *equation, int *np);
void elim_loop(token_type *equation, int *np);
void simp_ssub(token_type *equation, int *np, long v, double d, int power_flag, int times_flag, int fc_level);
void simp_equation(int n);
void mid_simp_side(token_type *equation, int *np);
void mid_simp_equation(int n);
void simps_side(token_type *equation, int *np, int zsolve);
void simpv_side(token_type *equation, int *np, long v);
void simpv_equation(int n, long v);
int factor_imaginary(token_type *equation, int *np);
void factorv(token_type *equation, int *np, long v);
void calc_simp(token_type *equation, int *np);
void approximate(token_type *equation, int *np);
int simp_i(token_type *equation, int *np);
void simp_divide(token_type *equation, int *np);
void simp2_divide(token_type *equation, int *np, long v, int fc_level);
void simpb_side(token_type *equation, int *np, int uf_power_flag, int power_flag, int fc_level);
void simple_frac_side(token_type *equation, int *np);
void simpa_side(token_type *equation, int *np, int quick_flag, int frac_flag);
void simpa_repeat_side(token_type *equation, int *np, int quick_flag, int frac_flag);
void simpa_repeat(int n, int quick_flag, int frac_flag);
void simple_frac_repeat_side(token_type *equation, int *np);
int simp_loop(token_type *equation, int *np);
int simp_pp(token_type *equation, int *np);
int integer_root_simp(token_type *equation, int *np);
int simp_constant_power(token_type *equation, int *np);
int simp2_power(token_type *equation, int *np);
double fixed_fmod(double k1, double k2);
int combine_constants(token_type *equation, int *np, int iflag);
int calc(int *op1p, double *k1p, int op2, double k2);
int elim_k(token_type *equation, int *np);
int se_compare(token_type *p1, int n1, token_type *p2, int n2, int *diff_signp);
int elim_sign(token_type *equation, int *np);
int div_imaginary(token_type *equation, int *np);
int reorder(token_type *equation, int *np);
int rationalize(token_type *equation, int *np);
/* solve.c */
int solve_espace(int want, int have);
int solve_sub(token_type *wantp, int wantn, token_type *leftp, int *leftnp, token_type *rightp, int *rightnp);
/* super.c */
void group_proc(token_type *equation, int *np);
int fractions_and_group(token_type *equation, int *np);
int make_fractions_and_group(int n);
int super_factor(token_type *equation, int *np, int start_flag);
/* unfactor.c */
int uf_tsimp(token_type *equation, int *np);
int uf_power(token_type *equation, int *np);
int uf_pplus(token_type *equation, int *np);
void uf_allpower(token_type *equation, int *np);
void uf_repeat(token_type *equation, int *np);
void uf_repeat_always(token_type *equation, int *np);
void uf_simp(token_type *equation, int *np);
void uf_simp_no_repeat(token_type *equation, int *np);
int ufactor(token_type *equation, int *np);
int uf_times(token_type *equation, int *np);
int sub_ufactor(token_type *equation, int *np, int ii);
int unsimp_power(token_type *equation, int *np);
void uf_neg_help(token_type *equation, int *np);
int patch_root_div(token_type *equation, int *np);
