#ifndef VAR1
void FUN1(void * VAR2)
{
 char * * VAR3 = (char * *)VAR2;
 char * VAR4 = (*VAR3);
 {
 size_t VAR5;
 char VAR6[100];
 memset(VAR6, '', 100-1);
 VAR6[100-1] = '';
 /* POTENTIAL FLAW: Possible buffer overflow if the size of data is less than the length of source */
 for (VAR5 = 0; VAR5 < 100; VAR5++)
 {
 VAR4[VAR5] = VAR6[VAR5];
 }
 VAR4[100-1] = '';
 FUN2(VAR4);
 }
}
#endif
