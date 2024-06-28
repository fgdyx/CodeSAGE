#ifndef VAR1
void FUN1(VAR2<char *> VAR3)
{
 char * VAR4 = VAR3[2];
 {
 char VAR5[10+1] = VAR6;
 size_t VAR7, VAR8;
 VAR8 = strlen(VAR5);
 /* POTENTIAL FLAW: data may not have enough space to hold source */
 for (VAR7 = 0; VAR7 < VAR8 + 1; VAR7++)
 {
 VAR4[VAR7] = VAR5[VAR7];
 }
 FUN2(VAR4);
 }
}
#endif
