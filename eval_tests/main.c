#include "eval_tests/advancedtests.h"

int	main(void)
{
	int		fd;
	char	*line;
	char	**ret;
	int		rlen;
	char	fname[] = "4charsnl";
	char	fname2[] = "4charsnlx2";
	char	fname3[] = "4charsnlx40";
	char	fname4[] = "4chars";
	char	fname5[] = "8chars";
	char	fname6[] = "16chars";
	char	fname7[] = "empty";
	int		n = 1;

	ret = &line;
	printf("\nADVANCED TESTS - READ FILE\n\n");

	printf("BUFF_SIZE: %d\n\n", BUFF_SIZE);
	fd = open(fname, O_RDONLY);
	if (fd < 0)
		return (0);
	printf("One line with newline:\n");
	while (1)
	{
		rlen = get_next_line(fd, ret);
		if (rlen <= 0)
			break;
		printf("%s<- end of line %d\n", *ret, n);
		n++;
	}
	close (fd);
	// free(line);
	printf("\n");
	n = 1;
	fd = open(fname2, O_RDONLY);
	if (fd < 0)
		return (0);
	printf("Two lines with newline:\n");
	while (1)
	{
		rlen = get_next_line(fd, ret);
		if (rlen <= 0)
			break;
		printf("%s<- end of line %d\n", *ret, n);
		n++;
	}
	close (fd);
	n = 1;
	printf("\n");
	fd = open(fname3, O_RDONLY);
	if (fd < 0)
		return (0);
	printf("40 lines with newline:\n");
	while (1)
	{
		rlen = get_next_line(fd, ret);
		if (rlen <= 0)
			break;
		printf("%s<- end of line %d\n", *ret, n);
		n++;
	}
	close (fd);

	n = 1;
	printf("\n");
	fd = open(fname4, O_RDONLY);
	if (fd < 0)
		return (0);
	printf("4 chars without newline:\n");
	while (1)
	{
		rlen = get_next_line(fd, ret);
		if (rlen <= 0)
			break;
		printf("%s<- end of line %d\n", *ret, n);
		n++;
	}
	close (fd);
	n = 1;
	printf("\n");
	fd = open(fname5, O_RDONLY);
	if (fd < 0)
		return (0);
	printf("8 chars without newline:\n");
	while (1)
	{
		rlen = get_next_line(fd, ret);
		if (rlen <= 0)
			break;
		printf("%s<- end of line %d\n", *ret, n);
		n++;
	}
	close (fd);
	n = 1;
	printf("\n");
	fd = open(fname6, O_RDONLY);
	if (fd < 0)
		return (0);
	printf("16 chars without newline:\n");
	while (1)
	{
		rlen = get_next_line(fd, ret);
		if (rlen <= 0)
			break;
		printf("%s<- end of line %d\n", *ret, n);
		n++;
	}
	close (fd);
	n = 1;
	printf("\n");
	fd = open(fname7, O_RDONLY);
	if (fd < 0)
		return (0);
	printf("Empty line (just a \\n with nothing else):\n");
	while (1)
	{
		rlen = get_next_line(fd, ret);
		if (rlen <= 0)
			break;
		printf("%s<- end of line %d\n", *ret, n);
		n++;
	}
	close (fd);

	return (0);
}
