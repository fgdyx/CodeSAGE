int main(int argc, char *argv[])
{
 int VAR1;
 int VAR2;
 char VAR3[10];
 VAR1 = 4105;
 for(VAR2 = 0; ; VAR2++)
 {
 if (VAR2 > VAR1) break;
 /* BAD */
 VAR3[VAR2] = '';
 }
 return 0;
}
