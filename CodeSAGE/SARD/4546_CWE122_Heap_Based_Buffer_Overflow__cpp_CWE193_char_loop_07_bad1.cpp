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
 size_t VAR6, VAR7;
 VAR7 = strlen(VAR4);
 /* POTENTIAL FLAW: data may not have enough space to hold source */
 for (VAR6 = 0; VAR6 < VAR7 + 1; VAR6++)
 {
 VAR2[VAR6] = VAR4[VAR6];
 }
 FUN2(VAR2);
 delete [] VAR2;
 }
}
#endif
