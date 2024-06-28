int main(int argc, char *argv[])
{
 char VAR1[10];
 if (sizeof VAR1 > 4105 + 1)
 {
 return 0;
 }
 /* BAD */
 VAR1[4105] = '';
 return 0;
}
