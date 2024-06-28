#ifndef VAR1
void FUN1(char * &VAR2)
{
 /* FLAW: Did not leave space for a null terminator */
 VAR2 = new char[10];
}
void FUN2()
{
 char * VAR2;
 VAR2 = NULL;
 FUN1(VAR2);
 {
 char VAR3[10+1] = VAR4;
 /* POTENTIAL FLAW: data may not have enough space to hold source */
 memcpy(VAR2, VAR3, (strlen(VAR3) + 1) * sizeof(char));
 FUN3(VAR2);
 delete [] VAR2;
 }
}
#endif
