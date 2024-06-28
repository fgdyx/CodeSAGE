#ifndef VAR1
void FUN1(char * * VAR2)
{
 char * VAR3 = *VAR2;
 {
 size_t VAR4;
 char VAR5[100];
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 for (VAR4 = 0; VAR4 < 100; VAR4++)
 {
 VAR3[VAR4] = VAR5[VAR4];
 }
 VAR3[100-1] = '';
 FUN2(VAR3);
 delete [] VAR3;
 }
}
#endif
