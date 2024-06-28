int main(int argc, char *argv[])
{
 int VAR1[5];
 char VAR2[10];
 VAR1[0] = 4105;
 /* BAD */
 VAR2[VAR1[0]] = '';
 return 0;
}
