int main(int argc, char *argv[])
{
 int VAR1;
 char VAR2[10];
 VAR1 = 0;
 while(VAR1 <= 4105)
 {
 /* BAD */
 VAR2[VAR1] = '';
 VAR1++;
 }
 return 0;
}
