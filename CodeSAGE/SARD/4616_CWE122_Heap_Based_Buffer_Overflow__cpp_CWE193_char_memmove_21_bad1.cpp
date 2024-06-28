#ifndef VAR1
static int VAR2 = 0;
static char * FUN1(char * VAR3)
{
 if(VAR2)
 {
 /* FLAW: Did not leave space for a null terminator */
 VAR3 = new char[10];
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
 /* POTENTIAL FLAW: data may not have enough space to hold source */
 memmove(VAR3, VAR4, (strlen(VAR4) + 1) * sizeof(char));
 FUN3(VAR3);
 delete [] VAR3;
 }
 ;
}
#endif
