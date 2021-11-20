#include <stdio.h>
int main()
{
	int a, b, c, d, e, f, g, h, i, j, k, l, m, n;
	
	for(e=1;e<=9;e++)
		for (f = 1;f <= 9;f++)
			for (g = 1;g <= 9;g++)
				for (h = 1;h <= 9;h++)
					for (i = 1;i <= 9;i++)
						for (j = 1;j <= 9;j++)
							for (k = 1;k <= 9;k++)
								for (l = 1;l <= 9;l++)
									for (m = 1;m <= 9;m++)
									{
										if (e != f && e != g && e != h && e != i && e != j && e != k && e != l && e != m &&
											f != g && f != h && f != i && f != j && f != k && f != l && f != m &&
											g != h && g != i && g != j && g != k && g != l && g != m &&
											h != i && h != j && h != k && h != l && h != m &&
											i != j && i != k && i != l && i != m &&
											j != k && j != l && j != m &&
											k != l && k != m &&
											l != m)
										{
											a = e * 10 + f;
											b = g * 10 + h;
											c = i * 10 + j;
											d = k * 100 + l * 10 + m;

										}
										if (a * b == c * d)
										{
											printf("%d*%d=%d*%d", a, b, c, d);
										}
									}

}