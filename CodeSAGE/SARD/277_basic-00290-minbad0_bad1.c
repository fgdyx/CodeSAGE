#VAR1 <VAR2.VAR3>
int main(int argc, char *argv[])
{
 int VAR4;
 int VAR5;
 char VAR6[11];
 char VAR7[10];
 memset(VAR6, '', 11);
 VAR6[11 - 1] = '';
 VAR4 = -1;
 VAR5 = sizeof VAR7;
 if (VAR4 <= VAR5)
 {
 /* BAD */
 memcpy(VAR7, VAR6, VAR4);
 }
 return 0;
}
