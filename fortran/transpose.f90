program matrixTranspose
implicit none

   integer, dimension(3,3) :: a,b 
   integer :: i, j
    
   do i = 1, 3
      do j = 1, 3
         a(i, j) = i
      end do
   end do
   
   print *, 'Matrix Transpose: A Matrix'

   do i = 1,3
      write(*,"(3(I3,2X))") a(i,1:3)
   end do
   
   b = transpose(a)
   print *, 'Transposed Matrix:'
      
    do i = 1,3
      write(*,"(3(I3,2X))") b(i,1:3)
   end do
   
end program matrixTranspose
