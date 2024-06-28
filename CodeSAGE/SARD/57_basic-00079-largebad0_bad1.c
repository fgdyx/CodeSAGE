int main(int argc, char *argv[])
{
 int VAR1;
 char VAR2[10];
 VAR1 = 0;
 for( ; ; )
 {
 if (VAR1 > 4105) break;
 /* BAD */
 VAR2[4105] = '';
 VAR1++;
 }
 return 0;
}
