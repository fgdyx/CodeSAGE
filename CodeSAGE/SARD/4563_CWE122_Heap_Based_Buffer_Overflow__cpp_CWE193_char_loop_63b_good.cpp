#ifndef VAR1
void FUN1(char * * VAR2)
{
 char * VAR3 = *VAR2;
 {
 char VAR4[10+1] = VAR5;
 size_t VAR6, VAR7;
 VAR7 = strlen(VAR4);
 for (VAR6 = 0; VAR6 < VAR7 + 1; VAR6++)
 {
 VAR3[VAR6] = VAR4[VAR6];
 }
 FUN2(VAR3);
 delete [] VAR3;
 }
}
#endif
