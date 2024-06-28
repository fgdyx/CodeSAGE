int main(int argc, char *argv[])
{
 float VAR1[10];
 /* BAD */
 VAR1[4105] = 55.55;
 return 0;
}
