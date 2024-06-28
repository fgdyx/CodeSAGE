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
 while(1)
 {
 /* BAD */
 VAR5[VAR4] = '';
 VAR4 += VAR3;
 if (VAR4 > VAR2) break;
 }
 return 0;
}
