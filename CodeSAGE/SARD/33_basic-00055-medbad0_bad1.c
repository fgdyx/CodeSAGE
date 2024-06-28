int main(int argc, char *argv[])
{
 char * VAR1;
 char * VAR2;
 char VAR3[10];
 VAR1 = VAR3;
 VAR2 = VAR1;
 /* BAD */
 VAR2[17] = '';
 return 0;
}
