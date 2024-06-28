#ifndef VAR1
void FUN1(char * VAR2)
{
 {
 char VAR3[10+1] = VAR4;
 /* POTENTIAL FLAW: data may not have enough space to hold source */
 memmove(VAR2, VAR3, (strlen(VAR3) + 1) * sizeof(char));
 FUN2(VAR2);
 delete [] VAR2;
 }
}
void FUN3()
{
 char * VAR2;
 VAR2 = NULL;
 /* FLAW: Did not leave space for a null terminator */
 VAR2 = new char[10];
 FUN1(VAR2);
}
#endif
