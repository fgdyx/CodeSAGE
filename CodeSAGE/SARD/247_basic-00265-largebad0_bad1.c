int main(int argc, char *argv[])
{
 int VAR1;
 int VAR2;
 int VAR3;
 char VAR4[10];
 VAR1 = 4105;
 VAR2 = 4105 - (4105 - 1);
 VAR3 = 0;
 for( ; VAR3 <= VAR1; VAR3 += VAR2)
 {
 /* BAD */
 VAR4[VAR3] = '';
 }
 return 0;
}
