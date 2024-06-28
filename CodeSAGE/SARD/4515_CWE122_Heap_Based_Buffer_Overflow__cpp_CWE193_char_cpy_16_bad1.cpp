#ifndef VAR1
void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 while(1)
 {
 /* FLAW: Did not leave space for a null terminator */
 VAR2 = new char[10];
 break;
 }
 {
 char VAR3[10+1] = VAR4;
 /* POTENTIAL FLAW: data may not have enough space to hold source */
 strcpy(VAR2, VAR3);
 FUN2(VAR2);
 delete [] VAR2;
 }
}
#endif
