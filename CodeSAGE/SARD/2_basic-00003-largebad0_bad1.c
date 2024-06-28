int main(int argc, char *argv[])
{
 char VAR1[10];
 /* BAD */
 VAR1[-4096] = '';
 return 0;
}
