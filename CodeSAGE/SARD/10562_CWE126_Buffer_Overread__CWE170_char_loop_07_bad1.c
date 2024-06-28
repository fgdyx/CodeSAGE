#ifndef VAR1
void FUN1()
{
 if(VAR2==5)
 {
 {
 char VAR3[150], VAR4[100];
 int VAR5;
 memset(VAR3, '', 149);
 VAR3[149] = '';
 for(VAR5=0; VAR5 < 99; VAR5++)
 {
 VAR4[VAR5] = VAR3[VAR5];
 }
 /* FLAW: do not explicitly null terminate dest after the loop */
 FUN2(VAR4);
 }
 }
}
#endif
