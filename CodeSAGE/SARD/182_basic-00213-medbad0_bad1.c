int main(int argc, char *argv[])
{
 int VAR1;
 int VAR2;
 char VAR3[10];
 VAR1 = 17;
 VAR2 = 0;
 for( ; VAR2 <= VAR1; VAR2++)
 {
 /* BAD */
 VAR3[VAR2] = '';
 }
 return 0;
}
