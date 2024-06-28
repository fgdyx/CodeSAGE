int main(int argc, char *argv[])
{
 int VAR1;
 char VAR2[10];
 VAR1 = 1;
 switch (VAR1)
 {
 case 1:
 /* BAD */
 VAR2[4105] = '';
 break;
 default:
 break;
 }
 return 0;
}
