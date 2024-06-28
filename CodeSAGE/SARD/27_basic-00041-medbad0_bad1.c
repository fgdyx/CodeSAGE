int main(int argc, char *argv[])
{
 int VAR1;
 char VAR2[10];
 VAR1 = 4;
 /* BAD */
 (VAR2 + (4 * VAR1))[1] = '';
 return 0;
}
