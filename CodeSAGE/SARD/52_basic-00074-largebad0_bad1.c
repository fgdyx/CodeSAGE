int main(int argc, char *argv[])
{
 int VAR1;
 char VAR2[10];
 VAR1 = 0;
 do
 {
 /* BAD */
 VAR2[4105] = '';
 VAR1++;
 }
 while(VAR1 <= 4105);
 return 0;
}
