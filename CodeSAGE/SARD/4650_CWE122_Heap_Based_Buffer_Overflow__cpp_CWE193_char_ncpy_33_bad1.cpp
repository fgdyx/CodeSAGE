#ifndef VAR1
void FUN1()
{
 char * VAR2;
 char * &VAR3 = VAR2;
 VAR2 = NULL;
 /* FLAW: Did not leave space for a null terminator */
 VAR2 = new char[10];
 {
 char * VAR2 = VAR3;
 {
 char VAR4[10+1] = VAR5;
 /* POTENTIAL FLAW: data may not have enough space to hold source */
 strncpy(VAR2, VAR4, strlen(VAR4) + 1);
 FUN2(VAR2);
 delete [] VAR2;
 }
 }
}
#endif
