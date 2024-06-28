#VAR1 <VAR2.VAR3>
int main(int argc, char *argv[])
{
 int VAR4;
 char VAR5[11];
 char VAR6[10];
 memset(VAR5, '', 11);
 VAR5[11 - 1] = '';
 VAR4 = -1;
 /* BAD */
 memcpy(VAR6, VAR5, VAR4);
 return 0;
}
