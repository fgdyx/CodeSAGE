int main(int argc, char *argv[])
{
 unsigned int VAR1[10];
 /* BAD */
 VAR1[4105] = 55;
 return 0;
}
