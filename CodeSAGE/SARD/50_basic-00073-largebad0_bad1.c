int main(int argc, char *argv[])
{
 int VAR1;
 char VAR2[10];
 for(VAR1 = 0; VAR1 <= 4105; VAR1++)
 {
 /* BAD */
 VAR2[4105] = '';
 }
 return 0;
}
