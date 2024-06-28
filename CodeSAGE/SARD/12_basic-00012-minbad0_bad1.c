int main(int argc, char *argv[])
{
 static char VAR1[10];
 /* BAD */
 VAR1[10] = '';
 return 0;
}
