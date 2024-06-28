int main(int argc, char *argv[])
{
 int VAR1;
 int VAR2;
 char VAR3[10];
 VAR1 = 4105 - (4105 - 1);
 for(VAR2 = 0; VAR2 <= 4105; VAR2 += VAR1)
 {
 /* BAD */
 VAR3[4105] = '';
 }
 return 0;
}
