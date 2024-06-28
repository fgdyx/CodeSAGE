int main(int argc, char *argv[])
{
 char VAR1[10];
 goto VAR2;
 return 0;
VAR2:
 /* BAD */
 VAR1[10] = '';
 return 0;
}
