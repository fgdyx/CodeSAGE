int main(int argc, char *argv[])
{
 int VAR1;
 int VAR2;
 char VAR3[10];
 VAR1 = 0;
 for(VAR2 = VAR1; ; VAR2++)
 {
 if (VAR2 > 4105) break;
 /* BAD */
 VAR3[4105] = '';
 }
 return 0;
}
