#ifndef VAR1
void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 if(VAR3==5)
 {
 /* FLAW: Did not leave space for a null terminator */
 VAR2 = new char[10];
 }
 {
 char VAR4[10+1] = VAR5;
 /* POTENTIAL FLAW: data may not have enough space to hold source */
 memmove(VAR2, VAR4, (strlen(VAR4) + 1) * sizeof(char));
 FUN2(VAR2);
 delete [] VAR2;
 }
}
#endif
