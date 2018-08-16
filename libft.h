/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 19:12:01 by issmith           #+#    #+#             */
/*   Updated: 2018/08/16 12:01:04 by issmith          ###   ########.fr       */
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

typedef struct		s_loc
{
	int				x;
	int				y;
	int				data;
	char			c;
	struct s_loc	*next;
}					t_loc;

typedef	struct		s_piece
{
	int				**spot;
	char			c;
	int				data;
	struct s_piece	*next;
}					t_piece;

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
char				**ft_init(char **str, int x);
int					ft_read_file(char *input, char **str);
int					ft_check_valid(char **str);
void				ft_check_help(char **tmp, int *i, int *c, int *hash);
int					ft_pcs(char *str);
int					ft_make_tmp(char ***tmp, char *str, int x);
char				*ft_FL(char *str, int i);
char				*ft_ZR(char *str, int i);
char				*ft_JU(char *str, int i);
void				ft_error_msg(int nb);
void				ft_make_alpha(char ***arr, char ***tmp, int x);
void				ft_control(char **alph, int flag, int end);
void				ft_create_square(size_t size);
void				ft_control(char **alph, int flag, int end);
void				ft_print_arr(void);
int					ft_solve(char **alph,int flag);
int					ft_check_next(char *str);
int					ft_fill_basic(char **alph, int flag);
int					ft_pc_fit(char *str);
void				ft_place_pc(char *str, int i);
int					ft_piece_zero(void);
int					ft_piece_one(void);
int					ft_piece_two(void);
int					ft_piece_three(void);
int					ft_piece_four(void);
int					ft_piece_five(void);
int					ft_piece_six(void);
int					ft_piece_seven(void);
int					ft_piece_eight(void);
int					ft_piece_nine(void);
int					ft_piece_ten(void);
int					ft_piece_elev(void);
int					ft_piece_twel(void);
int					ft_piece_thir(void);
int					ft_piece_fote(void);
int					ft_piece_fift(void);
int					ft_piece_sixt(void);
int					ft_piece_sevt(void);
int					ft_piece_eitt(void);
int					ft_which_pc(int nb);
int					ft_which_pc2(int nb);
void				ft_g_strs(void);
int					ft_compare(const char *s1, const char *s2);
int					ft_need_rm(void);
void				ft_handle_pc(char *str, int i, int flag);
char				*ft_strrev(char *str);
void				ft_place_flsq(char c, int nb);
void				ft_place_jdlr(char c, int nb);
void				ft_place_ju(char c);
void				ft_place_lrds(char c, int nb);
void				ft_place_trtl(char c, int nb);
void				ft_place_zldr(char c, int nb);
void				ft_place_zull(char c, int nb);
void				ft_order_alph(int *g_order, int g_inc);
void				ft_remove_pc(int nb);
void				ft_move_pc(char *str, int let);
int					ft_char_str(char *str, char c);
void				ft_count_spc(void);
void				fillit(char **alph, int flag);


extern int			g_order[]; // order of the pieces by int
extern char 		**g_strs;  // cpy of the pcs in string form
extern char			**g_square; // the array where the final square
extern int			g_i;       // global increment i
extern int			g_j;		// global increment j
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


#endif
