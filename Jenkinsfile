pipeline {
    agent {
        label 'hemtt'
    }

    stages {
        stage('Keys') {
            steps {
                withCredentials([
                    file(credentialsId: 'ANROP_CSLA_JSRS_PRIVATE_KEY', variable: 'ANROP_CSLA_JSRS_PRIVATE_KEY'),
                    file(credentialsId: 'ANROP_CSLA_JSRS_PUBLIC_KEY', variable: 'ANROP_CSLA_JSRS_PUBLIC_KEY')
                ]) {
                    bat 'mkdir releases\\keys'
                    bat 'copy %ANROP_CSLA_JSRS_PRIVATE_KEY% releases\\keys'
                    bat 'copy %ANROP_CSLA_JSRS_PUBLIC_KEY% releases\\keys'
                }
            }
        }

        stage('Build') {
            steps {
                bat 'hemtt build --release' 
            }
        }

        stage('Archive Build') {
            steps {
                archiveArtifacts artifacts: 'releases/1.0.0/**/*'
            }
        }

        stage('Publish to Steam Workshop') {
            when {
                branch 'master'
            }

            steps {
                publishSteamWorkshop '2518713481', 'releases/1.0.0/@anrop_csla_jsrs', "https://github.com/Anrop/CSLA-JSRS/commit/${env.GIT_COMMIT}"
            }
        }
    }
}

void publishSteamWorkshop(String id, String mod, String changeNote) {
    bat "\"C:\\Program Files (x86)\\Steam\\SteamApps\\common\\Arma 3 Tools\\Publisher\\PublisherCmd.exe\" update /changeNote:$changeNote /id:$id /path:$mod"
}
