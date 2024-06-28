int main(int argc, char *argv[])
{
 int VAR1;
 char VAR2[10];
 goto VAR3;
 return 0;
VAR3:
 VAR1 = 1;
 if (VAR1)
 {
 /* BAD */
 VAR2[4105] = '';
 }
 return 0;
}
