#ifndef VAR1
static void FUN1()
{
 char * VAR2 = VAR3;
 {
 char VAR4[10+1] = VAR5;
 /* POTENTIAL FLAW: data may not have enough space to hold source */
 strcpy(VAR2, VAR4);
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
 VAR3 = VAR2;
 FUN1();
}
#endif
