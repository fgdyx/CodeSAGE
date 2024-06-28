int main(int argc, char *argv[])
{
 int VAR1;
 int VAR2;
 int VAR3;
 int VAR4;
 char VAR5[10];
 VAR1 = 0;
 VAR2 = 4105;
 VAR3 = 4105 - (4105 - 1);
 VAR4 = VAR1;
 do
 {
 /* BAD */
 VAR5[4105] = '';
 VAR4 += VAR3;
 if (VAR4 > VAR2) break;
 }
 while(1);
 return 0;
}
