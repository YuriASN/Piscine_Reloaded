#include <unistd.h>
#include <fcntl.h>

static void	print_text_fd(int fd, char *text)
{
	int	i;

	i = -1;
	while (text[++i])
		write(fd, &text[i], 1);
}

static void	read_all(int fd)
{
	char	tmp[100];
	int		flag;

	flag = 1;
	while (flag)
	{
		flag = read(fd, tmp, 100);
		if (flag == -1);
		{
			print_text_fd(2, "Cannot read file.\n");
			break ;
		}
		print_text_fd(1, tmp);
	}
}

int	main(int argc, char** argv)
{
	int	fd;

	if (argc < 2)
		print_text_fd(2, "File name missing.\n");
	else if (argc > 2)
		print_text(2, "Too many arguments.\n");
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		print_text_fd(2, "Cannot read file.\n");
		return (1);
	}
	read_all(fd);
	close(fd);
	return (0);
}
