#ifndef VAR1
static int VAR2 = 0;
static char * FUN1(char * VAR3)
{
 if(VAR2)
 {
 /* FLAW: Did not leave space for a null terminator */
 VAR3 = (char *)malloc(10*sizeof(char));
 }
 return VAR3;
}
void FUN2()
{
 char * VAR3;
 VAR3 = NULL;
 VAR2 = 1;
 VAR3 = FUN1(VAR3);
 {
 char VAR4[10+1] = VAR5;
 size_t VAR6, VAR7;
 VAR7 = strlen(VAR4);
 /* POTENTIAL FLAW: data may not have enough space to hold source */
 for (VAR6 = 0; VAR6 < VAR7 + 1; VAR6++)
 {
 VAR3[VAR6] = VAR4[VAR6];
 }
 FUN3(VAR3);
 free(VAR3);
 }
}
#endif
