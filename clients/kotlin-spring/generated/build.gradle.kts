import org.jetbrains.kotlin.gradle.tasks.KotlinCompile

buildscript {
    repositories {
        mavenCentral()
    }
    dependencies {
        classpath("org.springframework.boot:spring-boot-gradle-plugin:2.2.0.M3")
    }
}

group = "org.openapitools"
version = "1.0.0"

repositories {
    mavenCentral()
}

tasks.withType<KotlinCompile> {
    kotlinOptions.jvmTarget = "1.8"
}

plugins {
    val kotlinVersion = "1.3.30"
    id("org.jetbrains.kotlin.jvm") version kotlinVersion
    id("org.jetbrains.kotlin.plugin.jpa") version kotlinVersion
    id("org.jetbrains.kotlin.plugin.spring") version kotlinVersion
    id("org.springframework.boot") version "2.2.0.M3"
    id("io.spring.dependency-management") version "1.0.5.RELEASE"
}

dependencies {
    val kotlinxCoroutinesVersion="1.2.0"
    compile("org.jetbrains.kotlin:kotlin-stdlib-jdk8")
    compile("org.jetbrains.kotlin:kotlin-reflect")
    compile("org.springframework.boot:spring-boot-starter-web")
    compile("com.fasterxml.jackson.dataformat:jackson-dataformat-yaml")
    compile("com.fasterxml.jackson.dataformat:jackson-dataformat-xml")
    compile("com.fasterxml.jackson.module:jackson-module-kotlin")

    testCompile("org.jetbrains.kotlin:kotlin-test-junit5")
    testCompile("org.springframework.boot:spring-boot-starter-test") {
        exclude(module = "junit")
    }
}

repositories {
    maven { url = uri("https://repo1.maven.org/maven2") }
    maven { url = uri("https://repo.spring.io/snapshot") }
    maven { url = uri("https://repo.spring.io/milestone") }
}
