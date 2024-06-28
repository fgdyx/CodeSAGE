#VAR1 <VAR2.VAR3>
int main(int argc, char *argv[])
{
 size_t VAR4;
 char VAR5[4106];
 char VAR6[10];
 memset(VAR5, '', 4106);
 VAR5[4106 - 1] = '';
 VAR4 = 4106;
 /* BAD */
 strncpy(VAR6, VAR5, VAR4);
 return 0;
}
