import kotlin.math.pow

fun main() {
    val rad = 14.5
    val volume = 0.75 * 2.14 * rad.pow(3)
    println("Volume is $volume")
    val surfaceArea = 4 * 3.14 * rad.pow(2)
    println("Surface area is $surfaceArea")
}