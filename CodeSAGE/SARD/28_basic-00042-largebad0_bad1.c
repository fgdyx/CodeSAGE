int main(int argc, char *argv[])
{
 int VAR1;
 char VAR2[10];
 VAR1 = 4106;
 /* BAD */
 (VAR2 + (4105 % VAR1))[0] = '';
 return 0;
}
