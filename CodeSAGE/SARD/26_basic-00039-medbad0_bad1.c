int main(int argc, char *argv[])
{
 int VAR1[5];
 char VAR2[10];
 VAR1[0] = 17;
 /* BAD */
 VAR2[VAR1[0]] = '';
 return 0;
}
