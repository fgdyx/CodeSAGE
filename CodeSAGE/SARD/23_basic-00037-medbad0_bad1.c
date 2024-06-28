int main(int argc, char *argv[])
{
 int VAR1;
 char VAR2[10];
 VAR1 = 18;
 /* BAD */
 VAR2[17 % VAR1] = '';
 return 0;
}
