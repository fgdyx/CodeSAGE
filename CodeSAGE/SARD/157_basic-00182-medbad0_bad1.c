#VAR1 <assert.VAR2>
#VAR1 <VAR3.VAR2>
int main(int argc, char *argv[])
{
 VAR4 * VAR5;
 char VAR6[10];
 VAR5 = fopen("", "");
 assert(VAR5 != NULL);
 /* BAD */
 fgets(VAR6, 18, VAR5);
 fclose(VAR5);
 return 0;
}
