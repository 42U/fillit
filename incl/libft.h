/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 19:12:01 by issmith           #+#    #+#             */
/*   Updated: 2018/08/19 17:09:11 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# define Z_L	".##\n##"
# define Z_D	"#\n##\n.#"
# define Z_R	"##\n.##"
# define Z_U	".#\n##\n#"
# define L_L	"#\n#\n##"
# define L_U	"..#\n###"
# define L_R	"##\n.#\n.#"
# define L_D	"###\n#"
# define S_L	"#\n#\n#\n#"
# define F_L	"####"
# define S_Q	"##\n##"
# define T_U	".#\n###"
# define T_R	"#\n##\n#"
# define T_L	".#\n##\n.#"
# define T_D	"###\n.#"
# define J_D	"###\n..#"
# define J_L	".#\n.#\n##"
# define J_R	"##\n#\n#"
# define J_U	"#\n###"

# include <fcntl.h>
# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <errno.h>

void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memset(void *b, int c, size_t len);
void				ft_bzero(void *s, size_t n);
int					ft_strcmp(const char *s1, const char *s2);
void				ft_putchar(char c);
void				ft_putstr(char const *s);
void				ft_putnbr(int nb);
size_t				ft_strlen(const char *str);
char				*ft_strdup(const char *src);
char				*ft_strcpy(char *dest, const char *src);
char				*ft_strncpy(char *dest, const char *src, size_t len);
void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
char				*ft_strnew(size_t size);
void				ft_strdel(char **as);
char				**ft_init(char *str, int x);
int					ft_read_file(char *input, char **str);
int					ft_check_valid(char *str, int line, int hash);
void				ft_check_help(char **tmp, int *i, int *c, int *hash);
int					ft_pcs(char *str);
int					ft_make_tmp(char ***tmp, char *str, int x, int k);
char				*ft_what_one(char *str, int i);
char				*ft_what_three(char *str, int i);
char				*ft_what_two(char *str, int i);
void				ft_error_msg(int nb);
void				ft_make_alpha(char ***arr, char ***tmp, int x);
void				ft_control(char **alph, int flag, int end);
void				ft_create_square(size_t size);
void				ft_control(char **alph, int flag, int end);
void				ft_print_arr(void);
int					ft_solve(int *g_order, int flag, int pcs);
int					ft_check_next(char *str);
int					ft_fill_basic(char **alph, int flag);
int					ft_pc_fit(int g_k, int i, int j);
void				ft_place_pc(char *str, int i);
int					ft_piece_zero(int i, int j);
int					ft_piece_one(int i, int j);
int					ft_piece_two(int i, int j);
int					ft_piece_three(int i, int j);
int					ft_piece_four(int i, int j);
int					ft_piece_five(int i, int j);
int					ft_piece_six(int i, int j);
int					ft_piece_seven(int i, int j);
int					ft_piece_eight(int i, int j);
int					ft_piece_nine(int i, int j);
int					ft_piece_ten(int i, int j);
int					ft_piece_elev(int i, int j);
int					ft_piece_twel(int i, int j);
int					ft_piece_thir(int i, int j);
int					ft_piece_fote(int i, int j);
int					ft_piece_fift(int i, int j);
int					ft_piece_sixt(int i, int j);
int					ft_piece_sevt(int i, int j);
int					ft_piece_eitt(int i, int j);
int					ft_which_pc(int nb, int i, int j);
int					ft_which_pc2(int nb, int i, int j);
void				ft_g_strs(void);
int					ft_compare(const char *s1, const char *s2);
void				ft_need_rm(void);
void				ft_handle_pc(char *str, int i, int flag);
char				*ft_strrev(char *str);
void				ft_place_flsq(char c, int nb, int i, int j);
void				ft_place_jdlr(char c, int nb, int i, int j);
void				ft_place_ju(char c, int i, int j);
void				ft_place_lrds(char c, int nb, int i, int j);
void				ft_place_trtl(char c, int nb, int i, int j);
void				ft_place_zldr(char c, int nb, int i, int j);
void				ft_place_zull(char c, int nb, int i, int j);
void				ft_order_alph(int *g_order, int flag, int i, int j);
void				ft_remove_pc(int flag);
void				ft_move_pc(char *str, int let);
int					ft_char_str(char *str, char c);
void				ft_count_spc(void);
void				fillit(int *g_order, int flag);
void				ft_convert(char **alph);

extern int			g_order[];
extern char			**g_strs;
extern char			**g_square;
extern int			g_base;
extern int			g_pcs;
extern int			g_k;
extern int			g_inc;
extern int			g_flag;
extern char			g_char;
extern int			g_max;
extern int			g_nbr;
extern int			g_flag;
extern int			g_si;
extern int			g_count;
extern int			g_save;

#endif
